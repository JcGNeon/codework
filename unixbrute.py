import crypt
import optparse
import os
import sys
from threading import Thread

def checkFiles(pass_file,dict_file):
    if not (os.path.isfile(pass_file)) & (os.path.isfile(dict_file)):
        print "[-] Specified file does not exist."
        exit(0)
    elif not (os.access(pass_file,os.R_OK)) & (os.access(dict_file,os.R_OK)):
        print "[-] Unable to access specified file(s). Access denied."
        exit(0)
    else:
        print "[+] Specified files exist."
        main()

def testPass(dictFile,cryptPass):
    salt = cryptPass[0:2]
    for word in dictFile.readlines():
        word = word.strip('\n')
        cryptWord = crypt.crypt(word,salt)
        if (cryptWord == cryptPass):
            print "[+] Password found: " +str(word)
            return
    print "[-] Password not in dictionary."
    return
          
def main():
    parser = optparse.OptionParser("[%] usage: -f <filename> -d <dictionary>")
    parser.add_option("-f", dest = "thefile", type = "string", help = "specify the target file")
    parser.add_option("-d", dest = "thedict", type = "string", help = "specify the target dictionary.")
    (options,args) = parser.parse_args()
    if (options.thefile == None) | (options.thedict == None):
        print parser.usage
        exit(0)
    else:
        txtName = options.thefile
        txtDict = options.thedict
    dictFile = open(txtDict,'r')
    passFile = open(txtName,'r')
    
    for line in passFile.readlines():
        if ":" in line:
            user = line.split(":")[0]
            cryptPass = line.split(":")[1].strip(' ')
            print "[*] Cracking Password for user: " +str(user)
            t = Thread(target = testPass, args = (dictFile,cryptPass))
            t.start()

if __name__ == "__main__":
    pass_file = sys.argv[2]
    dict_file = sys.argv[4]
    checkFiles(pass_file,dict_file)
