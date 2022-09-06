#!/bin/bash
for file in ~/桌面/*
 	do
	if [ -f "$file" ];then	
	echo "$file"
	fi
done
