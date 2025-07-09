# Write a python program to rename a file to "renamed_by_python.txt".

import os

# Make sure 'sample.txt' exists in the same directory before running this code
old_name = "old.txt"
new_name = "renamed_by_python.txt"

try:
	os.rename(old_name, new_name)
	print(f"File renamed from {old_name} to {new_name}")
except FileNotFoundError:
	print(f"The file {old_name} does not exist.")
except Exception as e:
	print(f"An error occurred: {e}")