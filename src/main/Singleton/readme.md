# Singletonパターン

## 概要

- システム中に1つしかないオブジェクトを表現したい時に利用するデザインパターン
- 指定したクラスが1つしかないことを保証できる
- インスタンスが1つしかないことをプログラム上で表現できる

## メリット

- インスタンスが一つであることを保証することでインスタンス同士の干渉による影響を考慮しなくて済む

## 注意点

- javaで実装するときに<br>
  getInstanceメソッドの初回呼び出しでインスタンス生成を行うような場合は<br>
  ほぼ同時に呼び出しが発生するとインスタンスが複数生成される可能性がある
- 対応策としてsyncronizedを付加することでスレッドセーフにすることができる

```

// NGパターン
// スレッドセーフではないのでSingletonにできていない
public static Singleton getInstance() {
  if(instance == null) {
    instance = new Singleton();
  }

  return instance;
}

// OKパターン
// スレッドセーフ
public staic syncronized Singleton getInstance() {
  if(instance == null) {
    instance = new Singleton();
  }

  return instance;
}

```