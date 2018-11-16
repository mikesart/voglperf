#!/bin/bash

for filename in "$@"; do
  if [ -f "${filename}" ]; then
    imagename="${filename%.*}.png"

    echo gnuplot ${filename} to ${imagename}...

    gnuplot -p -e "set output \"${imagename}\";set terminal pngcairo size 1280,720 enhanced;set ylabel 'milliseconds';set yrange [0:100]; plot \"${filename}\" with lines"
  else
    echo Skipping "${filename}"...
  fi
done
