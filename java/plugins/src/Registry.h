/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- 
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Initial Developer of the Original Code is Sun Microsystems,
 * Inc. Portions created by Sun are Copyright (C) 1999 Sun Microsystems,
 * Inc. All Rights Reserved. 
 */
#ifndef __Registry_h__
#define __Registry_h__
#include "jni.h"
class Registry {
public:
    static void SetPeer(jobject key, jlong peer);
    static void Remove(jobject key);
private:
    static void Initialize();
    static jclass clazz;
    static jmethodID setPeerMID;
    static jmethodID removeMID;
};
#endif /* __Registry_h__ */




