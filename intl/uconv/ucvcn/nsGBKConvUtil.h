/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef nsGBKConvUtil_h__
#define nsGBKConvUtil_h__
#include "prtypes.h"
#include "nscore.h"
class nsGBKConvUtil {
public:
  nsGBKConvUtil() {  }
  ~nsGBKConvUtil() { }
  PRUnichar GBKCharToUnicode(char aByte1, char aByte2);
  bool UnicodeToGBKChar(PRUnichar aChar, bool aToGL, 
                           char* aOutByte1, char* aOutByte2);
};
#endif /* nsGBKConvUtil_h__ */
