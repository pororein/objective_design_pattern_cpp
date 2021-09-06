# Adapterパターン

## 概要

- すでに提供されているものと必要とされているものの間のずれを埋めるパターン
- すでにあるものをadapt(適合)させる
- Wraperパターンと呼ばれることもある

## 種類

- クラスによるAdapterパターン(継承を使ったもの)
- インスタンによるAdapterパターン(委譲を使ったもの)

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

