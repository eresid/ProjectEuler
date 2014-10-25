#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  File: 025.py
#  Copyright 2013 Eugene Sakara <eresid@gmail.com>
#  License: MIT

import time

def main():
	startTime = time.time()
	
	#------------------------------------
	result = 1
	a = 0
	b = 1
	while True:
		result += 1
		#print ("F_1 = " + str(i) + " : " + str(b))
		
		c = b
		b = a + b
		a = c
		
		if (getNumbersCount(b)):
			break
	print ("result = " + str(result) + ", num: " + str(b))
	#------------------------------------
	
	timeAsString = "%.12f" % (time.time() - startTime) 
	print ("time: " + timeAsString)
	return 0

def getNumbersCount(number):
	if (len(str(number)) == 1000):
		return True
	return False

if __name__ == '__main__':
	main()

# result = 4613732
# time: 0.000999927521
