/*! @file
  @brief フッタ/ヘッダの部品
  @author 依積晶紀
*/
#pragma once

/************************************************************************/
//! フッタ/ヘッダの文字列作成時に利用するデータ
/************************************************************************/
struct TermContext
{
    int page;		//!< ページ番号
    int total_page;	//!< ページ総数
};

/************************************************************************/
//! フッタ/ヘッダ用記述の各パーツ
/************************************************************************/
class Term
{
  public:
    virtual ~Term()
    {
    }

  public:
    //! フッタ/ヘッダの文字列 を取得する。
    virtual CString get_term(const TermContext&) const = 0;

    //! コピー作成
    virtual Term* clone() const = 0;
};

/************************************************************************/
//! フッタ/ヘッダ用記述 [固定文字列]
/************************************************************************/
class TermString : public Term
{
  private:
    /* ---------------------------------------------------------------- */
    //! 出力文字列
    CString str_;

  public:
    /* ================================================================ */
    //! NULLターミネートされている文字列を指定して作成
    /*! @param [in] str 文字列						*/
    /* ================================================================ */
    explicit TermString(LPCTSTR str) : str_(str)
    {
    }

    /* ================================================================ */
    //! 指定範囲の文字列で作成
    /*! @param [in] first 最初の文字
	@param [in] last 最後の文字の次					*/
    /* ================================================================ */
    TermString(LPCTSTR first, LPCTSTR last) : str_(first, last - first)
    {
    }

  public:
    CString get_term(const TermContext&) const;
    Term* clone() const;
};

/************************************************************************/
//! フッタ/ヘッダ用記述 [ページ番号]
/************************************************************************/
class TermPage : public Term
{
  public:
    CString get_term(const TermContext&) const;
    Term* clone() const;
};

/************************************************************************/
//! フッタ/ヘッダ用記述 [ページ総数]
/************************************************************************/
class TermTotalPage : public Term
{
  public:
    CString get_term(const TermContext&) const;
    Term* clone() const;
};
