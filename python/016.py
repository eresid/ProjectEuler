#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  File: 015.py
#  Copyright 2013 Eugene Sakara <eresid@gmail.com>
#  License: MIT

# http://yak-prosto.com/yak-znayti-kilkist-dilnikiv/
# datetime.timedelta

import time

def main():
	startTime = time.time()
	
	value1000 = pow(2, 1000)
	print (getSumNumbers(value1000))

	timeAsString = "%.12f" % (time.time() - startTime) 
	print ("time: " + timeAsString)
	return 0
	
def getSumNumbers(number):
	sumResult = 0
	while number > 0:
		sumResult += number % 10
		number = number // 10
	return sumResult

if __name__ == '__main__':
	main()
