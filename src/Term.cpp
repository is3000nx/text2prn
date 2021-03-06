/*! @file
  @brief フッタ/ヘッダの部品
  @author 依積晶紀
*/
#include	"stdafx.h"
#include	"Term.h"
#include	"Util.h"

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//! フッタ/ヘッダの文字列 を取得する。
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
CString TermString::get_term(const TermContext&) const
{
    return str_;
}

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//! コピーを作成する
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
Term* TermString::clone() const
{
    return new TermString(str_);
}

////////////////////////////////////////////////////////////

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//! フッタ/ヘッダの文字列 を取得する。
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
CString TermPage::get_term(const TermContext& context) const
{
    return FString(_T("%d"), context.page);
}

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//! コピーを作成する
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
Term* TermPage::clone() const
{
    return new TermPage();
}

////////////////////////////////////////////////////////////

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//! フッタ/ヘッダの文字列 を取得する。
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
CString TermTotalPage::get_term(const TermContext& context) const
{
    return FString(_T("%d"), context.total_page);
}

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//! コピーを作成する
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
Term* TermTotalPage::clone() const
{
    return new TermTotalPage();
}
