/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "common_types.h"

namespace watchdog {

const char* AGDaemonID::ascii_fingerprint = "2B119B0EE8560DB9D262867AAFEB89DB";
const uint8_t AGDaemonID::binary_fingerprint[16] = {0x2B,0x11,0x9B,0x0E,0xE8,0x56,0x0D,0xB9,0xD2,0x62,0x86,0x7A,0xAF,0xEB,0x89,0xDB};

uint32_t AGDaemonID::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->addr);
          this->__isset.addr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->port);
          this->__isset.port = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->frequency);
          this->__isset.frequency = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->ag_map.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _ktype1;
            ::apache::thrift::protocol::TType _vtype2;
            iprot->readMapBegin(_ktype1, _vtype2, _size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              int32_t _key5;
              xfer += iprot->readI32(_key5);
              std::string& _val6 = this->ag_map[_key5];
              xfer += iprot->readString(_val6);
            }
            iprot->readMapEnd();
          }
          this->__isset.ag_map = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t AGDaemonID::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("AGDaemonID");
  xfer += oprot->writeFieldBegin("addr", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->addr);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("port", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->port);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("frequency", ::apache::thrift::protocol::T_I16, 3);
  xfer += oprot->writeI16(this->frequency);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("ag_map", ::apache::thrift::protocol::T_MAP, 4);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I32, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->ag_map.size()));
    std::map<int32_t, std::string> ::const_iterator _iter7;
    for (_iter7 = this->ag_map.begin(); _iter7 != this->ag_map.end(); ++_iter7)
    {
      xfer += oprot->writeI32(_iter7->first);
      xfer += oprot->writeString(_iter7->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* PingResponse::ascii_fingerprint = "225D317ACC2239665D64C9293D3A64F1";
const uint8_t PingResponse::binary_fingerprint[16] = {0x22,0x5D,0x31,0x7A,0xCC,0x22,0x39,0x66,0x5D,0x64,0xC9,0x29,0x3D,0x3A,0x64,0xF1};

uint32_t PingResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->live_set.clear();
            uint32_t _size8;
            ::apache::thrift::protocol::TType _etype11;
            iprot->readSetBegin(_etype11, _size8);
            uint32_t _i12;
            for (_i12 = 0; _i12 < _size8; ++_i12)
            {
              int32_t _elem13;
              xfer += iprot->readI32(_elem13);
              this->live_set.insert(_elem13);
            }
            iprot->readSetEnd();
          }
          this->__isset.live_set = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->dead_set.clear();
            uint32_t _size14;
            ::apache::thrift::protocol::TType _etype17;
            iprot->readSetBegin(_etype17, _size14);
            uint32_t _i18;
            for (_i18 = 0; _i18 < _size14; ++_i18)
            {
              int32_t _elem19;
              xfer += iprot->readI32(_elem19);
              this->dead_set.insert(_elem19);
            }
            iprot->readSetEnd();
          }
          this->__isset.dead_set = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t PingResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("PingResponse");
  xfer += oprot->writeFieldBegin("live_set", ::apache::thrift::protocol::T_SET, 1);
  {
    xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I32, static_cast<uint32_t>(this->live_set.size()));
    std::set<int32_t> ::const_iterator _iter20;
    for (_iter20 = this->live_set.begin(); _iter20 != this->live_set.end(); ++_iter20)
    {
      xfer += oprot->writeI32((*_iter20));
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("dead_set", ::apache::thrift::protocol::T_SET, 2);
  {
    xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I32, static_cast<uint32_t>(this->dead_set.size()));
    std::set<int32_t> ::const_iterator _iter21;
    for (_iter21 = this->dead_set.begin(); _iter21 != this->dead_set.end(); ++_iter21)
    {
      xfer += oprot->writeI32((*_iter21));
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

} // namespace
