#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  File: 012.py
#  Copyright 2013 Eugene Sakara <eresid@gmail.com>
#  License: MIT

# http://yak-prosto.com/yak-znayti-kilkist-dilnikiv/
# datetime.timedelta

import time

def main():
	startTime = time.time()
	
	result = 0
	divisors = 0
	number = 0
	
	for i in range(1, 10):
		number = getTriangularNumbers(i, number)
		print("i = " + str(i) + ", number = " + str(number));
		
		
	print ("result = " + str(result))

	timeAsString = "%.12f" % (time.time() - startTime) 
	print ("time: " + timeAsString)
	return 0

def getTriangularNumbers(position, value):
	return position + value
	

if __name__ == '__main__':
	main()
