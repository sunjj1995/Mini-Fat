/*
 *   _|                                      _|_|_|_|            _|
 *   _|          _|_|    _|      _|      _|  _|        _|_|_|  _|_|_|_|
 *   _|        _|    _|  _|      _|      _|  _|_|_|  _|    _|    _|
 *   _|        _|    _|    _|  _|  _|  _|    _|      _|    _|    _|
 *   _|_|_|_|    _|_|        _|      _|      _|        _|_|_|      _|_|
 * 
 * Gregory J. Duck.
 *
 * Copyright (c) 2017 The National University of Singapore.
 * All rights reserved.
 *
 * This file is distributed under the University of Illinois Open Source
 * License. See the LICENSE file for details.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    //if (argc != 2)
    //{
    //    fprintf(stderr, "usage: %s length\n", argv[0]);
    //    exit(1);
    //}
    //fprintf(stderr, "before argv[1]\n");
    //size_t size = (size_t)atoi(argv[1]);
    size_t size = 10;
    //fprintf(stderr, "before malloc\n");
    char *buf = (char *)malloc(size);
    //fprintf(stderr, "after malloc\n");
    //char buf[size];
    fprintf(stderr, "malloc(%zu) = %p\n", size, buf);
    //fprintf(stderr, "Enter a string: ");
    
    int i;
    for (i = 0; i < 20; i++) {
        fprintf(stderr, "iteration: %d\n", i);
        buf[i] = i + 'a';
    }
    buf[i] = '\0';
    fprintf(stderr, "String = \"%s\"\n", buf);
    return 0;
}

