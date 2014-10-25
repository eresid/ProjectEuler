#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  File: 002.py
#  Copyright 2013 Eugene Sakara <eresid@gmail.com>
#  License: MIT

#import time

def main():
	#startTime = time.time()
	
	result = 0
	a = 1
	b = 2
	while (b < 4000000):
		if (b % 2 == 0):
			result += b
		c = b
		b = a + b
		a = c
	print ("result = " + str(result))
	
	#timeAsString = "%.12f" % (time.time() - startTime) 
	#print ("time: " + timeAsString)
	return 0

if __name__ == '__main__':
	main()

# result = 4613732
# time: 0.000999927521
