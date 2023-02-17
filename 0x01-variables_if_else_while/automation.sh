#!/bin/bash

git add .

git status

echo 'Enter commit message: '
read MESSAGE

git commit -m "$MESSAGE"

git push origin main


