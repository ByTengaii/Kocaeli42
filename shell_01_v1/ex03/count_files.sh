#!/bin/bash
find . -type f | wc -l | sed 's: ::g'
