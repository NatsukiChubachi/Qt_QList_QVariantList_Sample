#ifndef SAMPLEQLIST_H
#define SAMPLEQLIST_H

#include <QObject>
#include <QQmlEngine>

/**
 * @brief QLists使用のサンプルプログラム
 */
class SampleQList : public QObject
{
    Q_OBJECT
    QML_ELEMENT


public:
    /**
     * @brief コンストラクタ
     */
    explicit SampleQList(QObject *parent = nullptr);

    /**
     * @brief 初期化関数
     */
    Q_INVOKABLE void initialize();


private:
    /**
     * メンバ変数
     */
    QList<int> _listNumber;     // 数値リスト


};

#endif // SAMPLEQLIST_H
