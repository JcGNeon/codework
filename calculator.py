from re import findall as find, search
from sys import exit

print "Neon Calculator verson 1.0. To quit just enter \"quit\".\n"

def add(x, y):
	return x + y


def sub(x, y):
	return x - y


def mul(x, y):
	return x * y


def div(x, y):
	return x / y


def getNumbers(varInput):
	variables = find(r'[\d.]+', varInput)
	
	if variables is not None:
		return float(variables[0]), float(variables[1])
	else:
		print "\'%s\' is not valid input. Please try again.\n" % varInput


def main():
	while True:
		varInput = raw_input('> ')
	
		if search(r'\+', varInput) is not None:  # add
			variables = getNumbers(varInput)
			x = variables[0]
			y = variables[1]
			print add(x, y)
		
		elif search(r'\-', varInput) is not None:  # subtract
			variables = getNumbers(varInput)
			x = variables[0]
			y = variables[1]
			print sub(x, y)
	
		elif search(r'\*', varInput) is not None:  # multiply
			variables = getNumbers(varInput)
			x = variables[0]
			y = variables[1]
			print mul(x, y)
	
		elif search(r'\/', varInput) is not None:  # divide
			variables = getNumbers(varInput)
			x = variables[0]
			y = variables[1]
			print div(x, y)
	
		elif search(r'quit', varInput) is not None:  # quit
			exit(0)
	
		else:
			print "Please enter a valid operator.\n"


if __name__ == "__main__":
	main()
