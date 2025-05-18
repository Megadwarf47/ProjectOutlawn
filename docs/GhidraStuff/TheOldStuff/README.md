# XRefs

Starting XREF: `140358c10`

Follow this rule when looking for new `XRefs` is to check the first contructor

### WRONG ❌

`FB::Message:Message(&PTR_PTR_LAB_141c35a28,0xb87da97,0xd45888c6,0xff);` //First paramiter of the call isn't named param_1

### RIGHT ✅

`FB::Message:Message(param_1,0x9c775c5c,0x628e72e7,0xff);` //First paramiter is named param_1 and is inside paranthesis

<img src="/docs/GhidraStuff/TheOldStuff/Images/README/1.png">

# [String](/docs/GhidraStuff/TheOldStuff/String.md)

# getType

`getType (First vftable member)`

getType is always the first member of the vftable

Double click to  `LAB_1413f2920`  into a function by pressing `F` and then rename that function to `fb::string::getType`

<img src="/docs/GhidraStuff/TheOldStuff/Images/README/2.png">

Should end up looking like this

<img src="/docs/GhidraStuff/TheOldStuff/Images/README/3.png">


# Vftable

`vftable (Placeholder)`

the vftable is this address in the constructor, name it to `fb::string::vftable`

<img src="/docs/GhidraStuff/TheOldStuff/Images/README/4.png">

Should end up looking like this

<img src="/docs/GhidraStuff/TheOldStuff/Images/README/5.png">

# Constructor

`Constructor (Thing next to undefinedNUMBER)` (The number is usually 8 ) 

Name it to `fb::string::string`

<img src="/docs/GhidraStuff/TheOldStuff/Images/README/6.png">

