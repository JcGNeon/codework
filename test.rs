use std::io::BufferedReader;
use std::io::File;

fn main() {
	let path = Path::new("aoeui.txt");
	let mut file = BufferedReader::new(File::open(&path));

	for line in file.lines() {
		print!("{}", line.unwrap());
	}
}
