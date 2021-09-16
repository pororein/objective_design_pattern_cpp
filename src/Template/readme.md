# Template Method パターン

## 概要

スーパークラスで処理の枠組みを決め、サブクラスで具体的な実装を行うデザインパターン<br>
継承を使用してプログラムの動作を変更する

## メリット

- ロジックを共通化することで、再利用可能になる
  - ロジックは一緒だが各処理に微妙に差分がある場合はサブクラスで表現することができる
  - ロジックのバグが発見されたとしてもテンプレートメソッドを修正するだけで良くなる
- スーパークラス型の変数にサブクラスのインスタンスを代入してもテンプレートメソッドを利用できる
  - The Liskov Subsitution Principle (LSP)
    - 継承の原則
- subclass responsibility
  - サブクラスにはスーパークラスで宣言されている抽象メソッドを実装する責任が発生する

## 登場人物

- AbstractClass
  - テンプレートメソッドとテンプレートメソッドで使用する抽象メソッドを宣言する
  - 抽象メソッドはサブクラスによって実装される
  - 具体例: AbstracDisplayクラス
- ConcreteClass
  - AbstractClassで定義されている抽象メソッドを具体的に実装する
  - 実装したメソッドはAbstractClassのテンプレートメソッドから呼び出される
  - 具体例: CharDisplay, StringDisplay