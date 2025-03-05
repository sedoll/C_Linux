# vmware 단축키

## 화면에서 나가기
```
ctrl + alt
```


<hr>

# 설치 명령어

## tree
```
apt -y install tree
```
![](./img/image.png)

<hr>

# linux 명령어

## 종료
```
poweroff
halt -p
shutdown

-- 5분 후에 예약종료
shutdown -h +5

-- 예약종료 취소
shutdown -c

-- 사용자들에게 10분후에 종료한다는 메세지 전송
shutdown -k +10
```

## 재부팅
```
shutdown -r now
reboot
init 6
```

## 로그아웃
```
logout
exit
```

## 가상콘솔
```
ctrl + alt + f2 ~ f6 (f2는 x윈도우 모드)

만약 위의 키로 가상콘솔 변환이 안되는 경우
chvt 번호
를 입력하면 이동한다.
```

## 디렉터리 파일 출력
```
ls
ls -a
ls -l
ls -al
...
```

## 디렉터리 이동
```
cd /etc/systemd

-- 상위 디렉터리 이동
cd ..
```

## 현재 디렉터리의 전체 경로 출력
```
pwd
```

## 크기가 0인 파일 생성, 이미 존재하는 경우 수정
```
touch abc.txt
```

## 디렉터리 삭제 (사용에 주의)
```
rm -rf abc
```

## 파일, 디렉터리 복사
```
cp abc.txt cba.txt
```

## 파일과 디렉터리의 이름을 변경하거나 위치 이동
```
mv abc.txt www.txt
```

## 새로운 디렉터리 생성
```
mkdir abc
```

## 디렉터리 삭제 (비어있어야 동작)
```
rmdir abc
```

## 텍스트로 작성된 파일을 화면에 출력
```
cat a.txt b.txt
```

## 파일 내용의 앞 10행 또는 뒤 10행만 보이도록 설정
```
head /etc/systemd/user.conf
tail /etc/systemd/user.conf
```

## 텍스트로 작성된 파일을 화면에 페이지 단위로 출력
```
more /etc/systemd/system.conf
less /etc/systemd/system.conf
```

## 어떤 종류의 파일인지를 표시
```
file /etc/systemd/system.conf
```

## 터미널 화면을 깨끗하게 지워줌
```
clear
```

## 내가 쳤던 명령어들을 보여줌
```
history
```