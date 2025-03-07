# How to do messages for [categories](https://github.com/Twig6943/ProjectOutlawn/blob/main/GhidraNotes/BreeMsgs/Categories.h)

1.Open up bf3 pdb in ghidra

2.Press `G` and search for `Message` (This might change as time goes on)

3.Pick `0052a4f0` (This might change as time goes on)

4.Click to `Edit Data Type`

![image](https://github.com/user-attachments/assets/d35d281c-6bcc-4d9c-84af-20d5782eb59c)

5.Open up PVZ executable in another ghidra instance and Open up `Data Type Manager` on that instance

6.Create a new category called `fb` (This might change as time goes on)

7.Create a new category called `Messages` inside of the `fb` category (This might change as time goes on)

8.Right click to the smallest folder (Messages in this case) then do `New > Structure`

9.Give it the same name from bf3 pdb

![image](https://github.com/user-attachments/assets/fbcb91da-30f5-4748-9d92-07e2387f0511)

9.Just copy stuff from pdb and to their respective counterparts inside pvz

![Untitled2](https://github.com/user-attachments/assets/708faa81-0b61-45a5-9c84-2f1c98ab4407)

![Untitled](https://github.com/user-attachments/assets/f7024224-f8af-4053-8b83-7ed5c7c83b30)

10.Enable pack

![image](https://github.com/user-attachments/assets/8f6e6175-4224-4c3b-8d72-5af38553ab76)

11.Save

![image](https://github.com/user-attachments/assets/f76cd6a4-f5d5-439f-8c2c-cb592f2b2738)

12.Right click the function on the decompiler and pick `Edit Function Signature`

13.Pick `__thiscall` as the `Calling Convention`

![image](https://github.com/user-attachments/assets/24cbab30-6774-4014-8ec2-e136f5acfa4c)

14.Pick the first `Index` and Enable `Use Custom Storage`

![image](https://github.com/user-attachments/assets/036f7556-7131-40e0-addb-9ec7d0b70eed)

15.Rename the `Datatype` of the first `Index` to its `Name + *` (Ends up as `Message*` in this case)

![image](https://github.com/user-attachments/assets/5009098c-df94-407a-8874-14fa7ea1c33a)
