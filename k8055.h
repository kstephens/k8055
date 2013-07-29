/* $Id: k8055.h,v 1.4 2008/05/21 20:25:51 mr_brain Exp $

   This file is part of the libk8055 Library.

   The libk8055 Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The libk8055 Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the
   Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

   http://opensource.org/licenses/
*/
#ifndef _k8055_k8055_h
#define _k8055_k8055_h

#ifndef k8055_
#define k8055_(X) X
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* prototypes */
  int k8055_(OpenDevice)(long board_address);
  int k8055_(CloseDevice)();
  long k8055_(ReadAnalogChannel)(long Channelno);
  int k8055_(ReadAllAnalog)(long* data1, long* data2);
  int k8055_(OutputAnalogChannel)(long channel, long data);
  int k8055_(OutputAllAnalog)(long data1,long data2);
  int k8055_(ClearAllAnalog)();
  int k8055_(ClearAnalogChannel)(long channel);
  int k8055_(SetAnalogChannel)(long channel);
  int k8055_(SetAllAnalog)();
  int k8055_(WriteAllDigital)(long data);
  int k8055_(ClearDigitalChannel)(long channel);
  int k8055_(ClearAllDigital)();
  int k8055_(SetDigitalChannel)(long channel);
  int k8055_(SetAllDigital)();
  int k8055_(ReadDigitalChannel)(long channel);
  long k8055_(ReadAllDigital)();
  int k8055_(ResetCounter)(long counternr);
  long k8055_(ReadCounter)(long counterno);
  int k8055_(SetCounterDebounceTime)(long counterno, long debouncetime);
  int k8055_(ReadAllValues) (long int  *data1, long int *data2, long int *data3, long int *data4, long int *data5);
  int k8055_(SetAllValues)(int digitaldata, int addata1, int addata2);
  long k8055_(SetCurrentDevice)(long deviceno);
  long k8055_(SearchDevices)(void);
  char *k8055_(Version)(void);

#ifdef __cplusplus
}
#endif

#endif
