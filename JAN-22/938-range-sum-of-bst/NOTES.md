###### So major people who thought of a solution will be either using recursion ,DFS or BFS.
Now, let's talk about approach
​
# Algorithm:
In the following algorithm we will be discussing the solution of dfs approach .
```
1. letsumofRange be a variable that will be our final result . After this let's declare a dfs helper function .
2. The base case will be when the tree is empty so we return null
3. we have to find thesumofRange so for that we need to add all the root values which satisfyes the condition that node values should be more than low and less than high .If this is true than add it to sumofRange
4. After this let's dig the depth's of the tree i.e Left childs and Right childs.
5. Now just call out the dfs helper function in the main function
```