<!-- START: table -->
<table>
<tr>
<th>



</th>
<th>



</th>
<th>



</th>
</tr>
<tr>
<td>



</td>
<td>



</td>
<td>



</td>
</tr>
<tr>
<td>



</td>
<td>



</td>
<td>



</td>
</tr>
</table>
<!-- END: table -->

<span class=""></span>


hello <span class=""></span> there

<!-- START: div -->
<div class="">



</div>
<!-- END: div -->

<!-- START: ordered-list -->
<ol type="a">
<li>



```

```



</li>
<li>



```

```



</li>
<li>



```

```



</li>
<li>



```

```



</li>
</ol>
<!-- END: ordered-list -->

<!-- START: unordered-list -->
<ul>
<li>



```

```



</li>
<li>



```

```



</li>
<li>



```

```



</li>
<li>



```

```



</li>
</ul>
<!-- END: unordered-list -->


```>

```


```C
printf("Hello there");
```


<style>
    .todo
    {
        border-color: black;
        border-width: 1px;
        border-style: solid;
        border-radius: 4%;
        padding: 3px;
        margin: 1px;
    }

    .todo-pipelined::before
    {
        content: "\279F";
        color: grey;
        border-radius: 50%;
        border-style: solid;
        margin-right: 5px;
        padding: 1px;
    }

    .todo-inprogress::before
    {
        content: "\270D";
        color: blue;
        border-radius: 50%;
        border-style: solid;
        margin-right: 5px;
        padding: 1px;
    }

    .todo-completed::before
    {
        content: "\2714";
        color: green;
        border-radius: 50%;
        border-style: solid;
        margin-right: 5px;
        padding: 1px;
    }

    .todo-rejected::before
    {
        content: "\2717";
        color: red;
        border-radius: 50%;
        border-style: solid;
        margin-right: 5px;
        padding: 1px;
    }

    .todo-onhold::before
    {
        content: "\270B";
        color: yellow;
        border-radius: 50%;
        border-style: solid;
        margin-right: 5px;
        padding: 1px;
    }
</style>

<!-- START: div -->
<div class="todo">

<p class="todo-pipelined todo-title"><b>TASK TITLE:</b></p>
<p class="todo-description"><b>Description/Comment:</b></p>
</div>
<!-- END: div -->


<!-- START: div -->
<div class="todo">

<p class="todo-inprogress todo-title"><b>TASK TITLE:</b></p>
<p class="todo-description"><b>Description/Comment:</b></p>
</div>
<!-- END: div -->

<!-- START: div -->
<div class="todo">
<p class="todo-title todo-completed"><b>TASK TITLE:</b></p>
<p class="todo-description"><b>Description/Comment:</b></p>
</div>
<!-- END: div -->

<!-- START: div -->
<div class="todo">

<p class="todo-rejected todo-title"><b>TASK TITLE:</b></p>
<p class="todo-description"><b>Description/Comment:</b></p>
</div>
<!-- END: div -->

<!-- START: div -->
<div class="todo">

<p class="todo-onhold todo-title"><b>TASK TITLE:</b></p>
<p class="todo-description"><b>Description/Comment:</b></p>
</div>
<!-- END: div -->


<!-- START: div -->
<div class="todo">
<p class="todo-inprogress todo-title"><b>TASK TITLE:</b> Task 1</p>
<p class="todo-description"><b>Description/Comment:</b> There is nothing much about this task.</p>

<!-- START: div -->
<div class="todo">
<p class="todo-inprogress todo-title"><b>TASK TITLE:</b> subtask1</p>
<!--<p class="todo-description"><b>Description/Comment:</b> </p>-->
</div>
<!-- END: div -->
<!-- START: div -->
<div class="todo">
<p class="todo-pipelined todo-title"><b>TASK TITLE:</b> subtask2</p>
<!--<p class="todo-description"><b>Description/Comment:</b> </p>-->
</div>
<!-- END: div -->

</div>
<!-- END: div -->