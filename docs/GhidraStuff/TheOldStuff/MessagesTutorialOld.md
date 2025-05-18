# How to do messages for [categories]/docs/GhidraStuff/Messages/Categories.h)

1.Open up bf3 pdb in ghidra

2.Press `G` and search for `Message` (This might change as time goes on)

3.Pick `0052a4f0` (This might change as time goes on)

4.Click to `Edit Data Type`

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/1.png">

5.Open up PVZ executable in another ghidra instance and Open up `Data Type Manager` on that instance

6.Create a new category called `fb` (This might change as time goes on)

7.Create a new category called `Messages` inside of the `fb` category (This might change as time goes on)

8.Right click to the smallest folder (Messages in this case) then do `New > Structure`

9.Give it the same name from bf3 pdb

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/2.png">

9.Just copy stuff from pdb and to their respective counterparts inside pvz

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/3.png">

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/4.png">

10.Enable pack

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/5.png">

11.Save

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/6.png">

12.Right click the function on the decompiler and pick `Edit Function Signature`

13.Pick `__thiscall` as the `Calling Convention`

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/7.png">

14.Pick the first `Index` and Enable `Use Custom Storage`

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/8.png">

15.Rename the `Datatype` of the first `Index` to its `Name + *` (Ends up as `Message*` in this case)

<img src="/docs/GhidraStuff/TheOldStuff/Images/MessagesTutorialOld/9.png">
