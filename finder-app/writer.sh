#!/bin/bash

# Check if exactly two arguments are provided
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <writefile> <writestr>"
    exit 1
fi

writefile="$1"
writestr="$2"

# Extract the directory path from the full file path
dir=$(dirname "$writefile")

# Create the directory if it doesn't exist
if ! mkdir -p "$dir"; then
    echo "Error: Failed to create directory $dir"
    exit 1
fi

# Write the provided string to the file, overwriting any existing file
if ! echo "$writestr" > "$writefile"; then
    echo "Error: Failed to write to file $writefile"
    exit 1
fi

exit 0
