## lambda

```bash
$ size lambda_test *.o
   text	   data	    bss	    dec	    hex	filename
   3983	    672	      8	   4663	   1237	lambda_test
    719	      0	      0	    719	    2cf	graph.o
     87	      0	      0	     87	     57	main.o
    111	      0	      0	    111	     6f	node.o
    458	      0	      0	    458	    1ca	test_1.o
    430	      0	      0	    430	    1ae	test_2.o
```

## functor

```bash
$ size generic_test *.o
   text	   data	    bss	    dec	    hex	filename
   3925	    744	      8	   4677	   1245	functor_test
    709	      0	      0	    709	    2c5	graph.o
     87	      0	      0	     87	     57	main.o
    111	      0	      0	    111	     6f	node.o
    415	     40	      0	    455	    1c7	test_1.o
    417	     40	      0	    457	    1c9	test_2.o
```

## generic

```bash
$ size generic_test *.o
   text	   data	    bss	    dec	    hex	filename
   3437	    664	      8	   4109	   100d	generic_test
    609	      0	      0	    609	    261	graph.o
     87	      0	      0	     87	     57	main.o
    111	      0	      0	    111	     6f	node.o
    299	      0	      0	    299	    12b	test_1.o
    341	      0	      0	    341	    155	test_2.o
```

## Conclusion

1. generic
2. lambda
3. functor