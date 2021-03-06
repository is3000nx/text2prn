/*! @file
  @brief メイン
  @author 依積晶紀
*/
#pragma once

/************************************************************************/
//! アプリケーション
/************************************************************************/
class CMyApp : public CWinApp
{
  public:
    virtual BOOL InitInstance();

    /* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
    //! 設定されているプリンタ名を取得
    /*! @return プリンタ名						*/
    /* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
    HGLOBAL get_printer_name() const
    {
	return m_hDevNames;
    }

    /* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
    //! 設定されているプリンタのモードを取得
    /*! @return プリンタのモード					*/
    /* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
    HGLOBAL get_printer_mode() const
    {
	return m_hDevMode;
    }

    HDC get_default_printer_dc();

    /* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
    //! アプリケーションのインスタンスを取得
    /*! @return インスタンス						*/
    /* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
    static CMyApp* get_instance()
    {
//	return reinterpret_cast<CMyApp*>(::AfxGetApp());
	return dynamic_cast<CMyApp*>(::AfxGetApp());
    }
};
