#include "SampleQList.h"

/**
 * @brief コンストラクタ
 * @param parent
 */
SampleQList::SampleQList(QObject *parent)
    : QObject{parent}
{

    // メンバ変数初期化
    this->_listNumber.clear();
}

/**
 * @brief 初期化関数
 */
void SampleQList::initialize()
{
    // QListの内部データクリア
    this->_listNumber.clear();

    // QListの要素追加
    this->_listNumber.append( 1 );
    this->_listNumber.append( 10 );
    this->_listNumber.append( 100 );
    this->_listNumber.append( 999 );
    this->_listNumber.append( 1000 );

    // QList要素数のカウント
    int listLength = this->_listNumber.length();
    qDebug() << "QListの要素数：" << listLength;

    // QListの要素へのアクセス
    int tmpValue = this->_listNumber.at( 3 );
    qDebug() << "[3]の内容" << tmpValue;

    // QListの要素削除
    this->_listNumber.remove( 3 );
    qDebug() << "QListの[3]を削除しました";

    // 要素数を使ったループ処理
    qDebug() << "";
    qDebug() << "QListの要素数：" << listLength;

    listLength = this->_listNumber.length();
    for ( int i=0; i<listLength; i++ ) {
        qDebug() << "QList[" << i << "]の内容：" << this->_listNumber[i];
    }

}

