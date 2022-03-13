# Factory Method パターン

## 概要

インスタンス生成にTemplate Methodパターンを用いたもの

## メリット

- フレームワーク側にインスタンス生成に必要なシーケンスを抽象化して定義することで再利用可能なフレームワークを作成できる
- フレームワークは外部のパッケージに依存しないため、外部要因で修正することはない

## 登場人物

### フレームワーク

- Product: インスタンスが持つべきAPIを定める抽象クラス
- Creator: Productを生成する抽象クラス.<br>
  インスタンス生成メソッドを持っており、<br>
  これによってサブクラスがなんであれスーパークラスは影響を受けない<br>
  (テンプレートメソッドと同じく、具体的なインスタンス生成で行う各作業はConcreteCreatorクラスが実装する)

### 実装

- ConcreteProduct: 具体的なインスタンスを定める
- ConcreteCreator: インスタンス生成に必要な具体的な作業を実装する
