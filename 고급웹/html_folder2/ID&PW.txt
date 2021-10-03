id=prompt('아이디 입력');

if(id==='admin') {

	password=prompt('비밀번호 입력');

	if(password==='123456') {
		document.write("<script src='./ejs/login_20.js'> </script>");
	}

	else {
		document.write("<script src='./ejs/error_20.js'> </script>");
	}
}


else {
	document.write("<script src='./ejs/error_20.js'> </script>");
}