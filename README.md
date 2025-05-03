# 依存関係

本テンプレートは以下に依存しておりますが、後述コマンドで全部入るはずです

- curl
- git
- build-essential
- taskfile
- uv
  - online-judge-tools
  - oj-verify
- cargo
  - pahcer

## インストールスクリプト

インストールするのは以下のコマンドで可能です

```bash
bash -c "$(curl --location https://gist.githubusercontent.com/hotman78/74b84c4480b98e6426a602c9b8a2d274/raw/a093e43c177f7f152c6d680b887f7ae9f26d5f35/install-cp-template.sh)" && source ~/.local/bin/env
```

またその後、こちらに沿って atcoder にログインしてください

https://github.com/key-moon/aclogin

その後、vscode にて作成したフォルダの中に入りターミナルから

```bash:
  task r
```

と入力して `Hello World` が出れば成功です

```bash:
task login
```

としてログイン出来てるかも確認してください
出来ている場合以下のような記述がでます

```
[NETWORK] 200 OK
[SUCCESS] You have already signed in.
```

# 使用方法

コマンドはターミナルから実行します。ターミナルは vscode 上で `Ctrl+j` を入力することでターミナルを出せます

## ログイン

- task login
  または
- task login-cli でログインする事が出来ます。

## テストケースのダウンロードと実行

`task dl -- (URL)` にてテストケースのダウンロードが可能です
`main.cpp` に書いたコードがテストケースに対して正答かどうかは `task t` で確認出来ます

また、自身が作成したテストケースを確認したい場合 `input.txt` に入力を書き、 `output.txt` に出力を書き、 `task r` を実行します

## 提出用

`task s -- (URL)` にて `main.cpp` に書いたコードを提出する事が出来ますが、これはコンテスト中にしか行えません。

## ライブラリの使用

例えば、以下の様にライブラリを使用します

```c++:library/template.hpp
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
```

```c++:main.cpp
#include"library/template.hpp"
#include<atcoder/modint>

int main(){
    cout<< "Hello World"<<endl;
}
```

すると、 `output.cpp` ファイルに以下のコードが出力されます

```c++:output.cpp
// auther: hotman78
// hash: 8b17ad
// ---raw code------
// #include"library/template.hpp"
// #include<atcoder/modint>
//
// int main(){
//     cout<< "Hello World"<<endl;
// }
// -----------------
#line 1 "library/template.hpp"
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#line 2 "main.cpp"

// {atcoder/modint の中身}

int main(){
    cout<< "Hello World"<<endl;
}

```

## リアクティブ

リアクティブ問題のテストは script/reactive.cpp にジャッジ側のコードを書きます
main.cpp の出力が script/reactive.cpp の入力になり script/reactive.cpp の入力が main.cpp の入力になります

## AHC

いずれ書く...
