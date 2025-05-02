# 依存関係

本テンプレートは以下に依存しております

- taskfile
- uv
- cargo

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
