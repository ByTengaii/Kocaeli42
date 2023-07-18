#!/bin/bash

sh_files=( $(find . -type f -name "*.sh") )

for file in "${sh_files[@]}"; do
  echo "$(basename "$file" .sh)"
done
