#ifndef SAMPLEQVARIANTLIST_H
#define SAMPLEQVARIANTLIST_H

#include <QObject>
#include <QQmlEngine>

/**
 * @brief QVariantLists使用のサンプルプログラム
 */
class SampleQVariantList : public QObject
{
    Q_OBJECT
    QML_ELEMENT


public:
    /**
     * @brief コンストラクタ
     */
    explicit SampleQVariantList(QObject *parent = nullptr);

    /**
     * @brief 初期化関数
     */
    Q_INVOKABLE void initialize();

    /**
     * @brief リストデータの取得
     * @return リストデータ
     */
    Q_INVOKABLE QVariantList getListData();


private:
    /**
     * メンバ変数
     */
    QVariantList _listVariant;     // 数値リスト


};

#endif // SAMPLEQVARIANTLIST_H
