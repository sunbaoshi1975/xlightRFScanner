#ifndef __PROTOCOL_PARSER_H
#define __PROTOCOL_PARSER_H

#include "_global.h"

extern uint8_t bMsgReady;

uint8_t ParseProtocol();
void build(uint8_t _destination, uint8_t _sensor, uint8_t _command, uint8_t _type, bool _enableAck, bool _isAck);
void Msg_NodeConfigData(uint8_t _to);

#endif /* __PROTOCOL_PARSER_H */