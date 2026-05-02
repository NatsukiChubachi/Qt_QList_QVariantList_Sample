#include "SampleQVariantList.h"

/**
 * @brief コンストラクタ
 * @param parent
 */
SampleQVariantList::SampleQVariantList(QObject *parent)
    : QObject{parent}
{

    // メンバ変数初期化
    this->_listVariant.clear();
}


/**
 * @brief 初期化関数
 */
void SampleQVariantList::initialize()
{
    // QVariantListの内部データクリア
    this->_listVariant.clear();

    // QVariantListの要素追加
    this->_listVariant.append( 1 );
    this->_listVariant.append( 3.14 );
    this->_listVariant.append( 0.0016 );
    this->_listVariant.append( "Hello world." );
    this->_listVariant.append( 999 );
    this->_listVariant.append( 9876.5 );

    // QVariantList要素数のカウント
    int listLength = this->_listVariant.length();
    qDebug() << "QVariantListの要素数：" << listLength;

    // QVariantListの要素へのアクセス
    qDebug() << "[0]の内容" << this->_listVariant[0].toInt();
    qDebug() << "[1]の内容" << this->_listVariant[1].toFloat();
    qDebug() << "[2]の内容" << this->_listVariant[2].toDouble();
    qDebug() << "[3]の内容" << this->_listVariant[3].toString();
    qDebug() << "[4]の内容" << this->_listVariant[4].toInt();
    qDebug() << "[5]の内容" << this->_listVariant[5].toFloat();

    // QListの要素削除
    this->_listVariant.remove( 5 );
    qDebug() << "QVariantListの[5]を削除しました";
    this->_listVariant.remove( 4 );
    qDebug() << "QVariantListの[4]を削除しました";


}

/**
 * @brief リストデータの取得
 * @return リストデータ
 */
QVariantList SampleQVariantList::getListData()
{
    return this->_listVariant;
}

