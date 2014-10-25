#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  File: 028.java
#  Copyright 2013 Eugene Sakara <eresid@gmail.com>
#  License: MIT

package org.chaszmin.java;

public class Main {
	public static void main(String[] args) {
		long startTime = System.currentTimeMillis();
		
		int result = 1;
		int total = 1;
		int step = 2;

		for (int i = 0; i < 500; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				result += step;
				System.out.println("a = " + result);
				total += result;
			}

			step += 2;
		}

		System.out.println("total = " + total);
		System.out.println("time = " + (System.currentTimeMillis() - startTime));
	}
}
