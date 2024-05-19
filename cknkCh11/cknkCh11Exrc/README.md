<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chapter 11 exercises</title>
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

11 Pointers
---

# Chapter 11 Excercises

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc001

Section 11.2

<!-- START: Problem Statement -->

If `i` is a variable and `p` points to `i`, which of the following expressions are aliases for `i`?

<!-- START: ordered-list -->
<ol type="a">
<li>

`*p`

</li>
<li>

`&p`

</li>
<li>

`*&p`

</li>
<li>

`&*p`

</li>
<li>

`*i`

</li>
<li>

`&i`

</li>
<li>

`*&i`

</li>
<li>

`&*i`

</li>
</ol>
<!-- END: ordered-list -->


<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

<!-- START: ordered-list -->
<ol type="a">
<li>

`*p`: Yes. Results in 'i'.

</li>
<li>

`&p`: No. Results in address of `p`.

</li>
<li>

`*&p`: No. Results in `p`.

</li>
<li>

`&*p`: No.

</li>
<li>

`*i`: No.

</li>
<li>

`&i`: No.

</li>
<li>

`*&i`: Yes.

</li>
<li>

`&*i`: No.

</li>
</ol>
<!-- END: ordered-list -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc002

Section 11.3

<!-- START: Problem Statement -->

If `i` is an `int` variable and `p` and `q` are pointers to `int`, which of the following assignments are legal?

<!-- START: ordered-list -->
<ol type="a">
<li>

`p = i;`

</li>
<li>

`*p = &i;`

</li>
<li>

`&p = q;`

</li>
<li>

`p = &q;`

</li>
<li>

`p = *&q;`

</li>
<li>

`p = q;`

</li>
<li>

`p = *q;`

</li>
<li>

`*p = q;`

</li>
<li>

`*p = *q;`

</li>
</ol>
<!-- END: ordered-list -->

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

<!-- START: ordered-list -->
<ol type="a">
<li>

`p = i;`: Illegal.

</li>
<li>

`*p = &i;`: Illegal.

</li>
<li>

`&p = q;`: Illegal.

</li>
<li>

`p = &q;`: Legal.

</li>
<li>

`p = *&q;`: Legal.

</li>
<li>

`p = q;`: Legal.

</li>
<li>

`p = *q;`: Illegal.

</li>
<li>

`*p = q;`: Illegal.

</li>
<li>

`*p = *q;`: Legal.

</li>
</ol>
<!-- END: ordered-list -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc003

Section 11.4

<!-- START: Problem Statement -->

The following function supposedly computes the sum and average of the numbers in the array `a`, which has length `n`. `avg` and `sum` point to variables that the function should modify. Unfortunately, the function contains several errors; find and correct them.

```C
void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    sum = 0.0;
    for(i = 0; i < n; i++)
        sum += a[i];
    avg = sum / n;
}
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for(i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc004

Section 11.4

<!-- START: Problem Statement -->

Write the following function:

```C
void swap(int *p, int *q);
```

When passed the addresses of two variables, `swap` should exchange the values of the variables:

```C
swap(&i, &j); /* exchanges values of i and j */
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc005

Section 11.4

<!-- START: Problem Statement -->

Write the following function:

```C
void split_time(long total_sec, int *hr, int *min, int *sec);
```

`total_sec` is a time represented as the number of seconds since midnight. `hr`, `min`, and `sec` are pointers to variables in which the function will store the equivalent time in hours (0-23), minutes (0-59), and seconds (0-59), respectively.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec/3600;
    total_sec = total_sec - *hr * 3600;
    *min = total_sec/60;
    *sec = total_sec - *min * 60;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc006

Section 11.4

<!-- START: Problem Statement -->

Write the following function:

```C
void find_two_largest(int a[], int n, int *largest, int *second_largest);
```

When passed an array `a` of length `n`, the function will search `a` for its largest and second-largest elements, storing them in the variables pointed to by `largest` and `second_largest`, respectively.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = a[0];
    *second_largest = *largest;
    for(int i = 1; i < n; i++)
    {
        if(*largest < a[i])
        {
            *second_largest = *largest;
            *largest = a[i];
        }
    }
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc007

Section 11.4

<!-- START: Problem Statement -->

Write the following function:

```C
void split_date(int day_of_year, int year, int *month, int *day);
```

`day_of_year` is an integer between 1 and 366, specifying a particular day within the year designated by year. `month` and `day` point to variables in which the function will store the equivalent month (1-12) and day within that month (1-31).

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

**Note:** Considering 29 days in february.

```C
void split_date(int day_of_year, int year, int *month, int *day)
{
    int i_n_days_in_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    for(int i = 0; i < 12; i++)
    {
        if(day_of_year <= i_n_days_in_month[i])
        {
            *month = i + 1;
            *day = day_of_year;
            break;    // Break out of for loop
        }
        day_of_year -= i_n_days_in_month[i];
    }
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>
    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Exrc008

Section 11.5

<!-- START: Problem Statement -->

Write the following function:

```C
int *find_largest(int a[], int n);
```

When passed an array `a` of length `n`, the function will return a pointer to the array's largest element.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int *find_largest(int a[], int n)
{
    int temp = 0, i;

    int largest = a[0];
    for(i = 1; i < n; i++)
    {
        if(largest < a[i])
        {
            largest = a[i];
            temp = i;
        }
    }

    return &a[temp];
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

</body>
</html>
