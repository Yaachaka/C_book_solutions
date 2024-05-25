<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>C Programming</title>
<link rel="stylesheet" href="./myStyle.css">
</head>
<body>

<hr class="chapterDivider">

# 12 Pointers and Arrays

<!-- START: div -->
<div class="theQuote">

Optimization hinders evolution.

</div>
<!-- END: div -->

Chapter 11 introduced pointers and showed how they're used as function arguments and as values returned by functions. This chapter covers another application for pointers. When pointers point to array elements, C allows us to perform arithmetic—addition and subtraction—on the pointers, which leads to an alternative way of processing arrays in which pointers take the place of array subscripts.

The relationship between pointers and arrays in C is a close one, as we'll soon see. We'll exploit this relationship in subsequent chapters, including Chapter 13 (Strings) and Chapter 17 (Advanced Uses of Pointers). Understanding the connection between pointers and arrays is critical for mastering C: it will give you insight into how C was designed and help you understand existing programs. Be aware, however, that one of the primary reasons for using pointers to process arrays—efficiency—is no longer as important as it once was, thanks to improved compilers.

Section 12.1 discusses pointer arithmetic and shows how pointers can be compared using the relational and equality operators. Section 12.2 then demonstrates how we can use pointer arithmetic for processing array elements. Section 12.3 reveals a key fact about arrays—an array name can serve as a pointer to the array's first element—and uses it to show how array arguments really work. Section 12.4 shows how the topics of the first three sections apply to multidimensional arrays. Section 12.5 wraps up the chapter by exploring the relationship between pointers and variable-length arrays, a C99 feature.

## 12.1 Pointer Arithmetic

We saw in Section 11.5 that pointers can point to array elements. For example, suppose that `a` and `p` have been declared as follows:

```C
int a[10], *p;
```

We can make `p` point to `a[0]` by writing

```C
p = &a[0];
```

Graphically, here's what we've just done:

<img src="./images/cknkCh12Sec12p1_1.png" alt="cknkCh12Sec12p1_1.png"/>

We can now access `a[0]` through `p`; for example, we can store the value 5 in `a[0]` by writing

```C
*p = 5;
```

Here's our picture now:

<img src="./images/cknkCh12Sec12p1_2.png" alt="cknkCh12Sec12p1_2.png"/>

Making a pointer `p` point to an element of an array `a` isn't particularly exciting. However. by performing pointer arithmetic (or address arithmetic) on `p`, we can access the other elements of `a`. C supports three (and only three) forms of pointer arithmetic:

```
- Adding an integer to a pointer
- Subtracting an integer from a pointer
- Subtracting one pointer from another
```

Let's take a close look at each of these operations. Our examples assume that the following declarations are in effect:

```C
int a[0], *p, *q, i;
```



## Examples

- Programs: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exmp/](./cknkCh12/cknkCh12Exmp/)

## Exercises

- Readme: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exrc/README.md](./cknkCh12/cknkCh12Exrc/README.md)  
- Readme (html): <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exrc/cknkCh12ExrcReadme.html](./cknkCh12/cknkCh12Exrc/cknkCh12ExrcReadme.html)  
- Programs: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exrc/](./cknkCh12/cknkCh12Exrc/)  

## Programming Projects

- Readme: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Prj/README.md](./cknkCh12/cknkCh12Prj/README.md)  
- Readme: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Prj/cknkCh12PrjReadme.html](./cknkCh12/cknkCh12Prj/cknkCh12PrjReadme.html)  
- Programs: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Prj/](./cknkCh12/cknkCh12Prj/)  

<hr class="chapterDivider"/>

</body>
</html>