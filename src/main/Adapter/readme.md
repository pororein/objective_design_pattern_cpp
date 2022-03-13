# Adapterパターン

## 概要

- すでに提供されているものと必要とされているものの間のずれを埋めるパターン
- すでにあるものをadapt(適合)させる
- Wraperパターンと呼ばれることもある

## 用語一覧

- Target: 必要となっているメソッドを定めているもの。主にinterfaceクラスが該当する
- Client: Targetが提供するメソッドを実行するもの。
- Adaptee: Targetへの変換が必要なメソッドを持つクラス。既存のクラスが該当する
- Adapter: AdapteeをTargetの形に変換するクラス。

## 種類

- クラスによるAdapterパターン(継承を使ったもの)
  - Adapteeを継承してTargetを実装(implements)するクラスを作成することで実現する
  - 実装されたメソッドは親クラスのメソッドをコールする
- インスタンによるAdapterパターン(委譲を使ったもの)
  - Adapteeをインスタンスとして保持し、Targetを実装(implements)するクラスを作成することで実現する
  - 実装されたメソッドはAdapteeのインスタンスのメソッドをコールする
  - Javaの場合、クラスを2つ継承するといったことができないため、Targetがクラスの場合こちらを利用する

## クラス一覧

- 継承: インターフェースを満たすように既存のクラスを変換したAdapterクラスを作成する
  - Banner: 提供元クラス
    - printWithParen: ()付きで文字を出力するメソッド
    - printWithAster: **付きで文字を出力するメソッド
  - Print: インターフェースクラス
    - printWeak
    - printStrong
  - PrintBanner: BannerクラスをPrintインターフェースを満たすようにしたAdapterクラス
    - printWeak: BannerクラスのprintWithParenをラップしたクラス
    - printStrong: BannerクラスのprintWithAsterクラスをラップしたクラス

