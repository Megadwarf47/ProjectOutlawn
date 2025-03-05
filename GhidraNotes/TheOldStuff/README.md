# GWGhidraNotes

# XRefs

Starting XREF: `140358c10`

Follow this rule when looking for new `XRefs` is to check the first contructor

### WRONG ❌

`FB::Message:Message(&PTR_PTR_LAB_141c35a28,0xb87da97,0xd45888c6,0xff);` //First paramiter of the call isn't named param_1

### RIGHT ✅

`FB::Message:Message(param_1,0x9c775c5c,0x628e72e7,0xff);` //First paramiter is named param_1 and is inside paranthesis

![XREFS](https://github.com/user-attachments/assets/138e8950-e427-4598-b810-5a991039bf1b)

# [String](https://github.com/Twig6943/CrzyecksGhidraNotes/blob/main/String.md)

# getType

`getType (First vftable member)`

getType is always the first member of the vftable

Double click to  `LAB_1413f2920`  into a function by pressing `F` and then rename that function to `fb::string::getType`

![gettype](https://github.com/user-attachments/assets/1b9fa526-92d6-4a84-9580-863ecb079988)

Should end up looking like this

![image](https://github.com/user-attachments/assets/462beaf5-a06a-4fdc-817e-49709e5418bc)


# Vftable

`vftable (Placeholder)`

the vftable is this address in the constructor, name it to `fb::string::vftable`

![image](https://github.com/user-attachments/assets/68cfa060-cf7d-4b2f-8350-45639dda3434)

Should end up looking like this

![image](https://github.com/user-attachments/assets/23cf816c-101f-40a9-9573-2868dd403c87)


# Constructor

`Constructor (Thing next to undefinedNUMBER` (The number is usually8 ) 

Name it to `fb::string::string`

![image](https://github.com/user-attachments/assets/568e7aba-453f-4259-b058-02b7b9ab6a42)

