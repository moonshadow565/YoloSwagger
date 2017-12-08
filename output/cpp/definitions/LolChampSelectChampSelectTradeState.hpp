#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChampSelectChampSelectTradeState_t {
    RECEIVED_E = 4,
    BUSY_E = 2,
    INVALID_E = 3,
    SENT_E = 5,
    AVAILABLE_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTradeState_t& v) {
    switch(v) {
      case LolChampSelectChampSelectTradeState_t::RECEIVED_E:
        j = "RECEIVED";
      break;
      case LolChampSelectChampSelectTradeState_t::BUSY_E:
        j = "BUSY";
      break;
      case LolChampSelectChampSelectTradeState_t::INVALID_E:
        j = "INVALID";
      break;
      case LolChampSelectChampSelectTradeState_t::SENT_E:
        j = "SENT";
      break;
      case LolChampSelectChampSelectTradeState_t::AVAILABLE_E:
        j = "AVAILABLE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTradeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RECEIVED"){
      v = LolChampSelectChampSelectTradeState_t::RECEIVED_E;
      return;
    }
    if(s == "BUSY"){
      v = LolChampSelectChampSelectTradeState_t::BUSY_E;
      return;
    }
    if(s == "INVALID"){
      v = LolChampSelectChampSelectTradeState_t::INVALID_E;
      return;
    }
    if(s == "SENT"){
      v = LolChampSelectChampSelectTradeState_t::SENT_E;
      return;
    }
    if(s == "AVAILABLE"){
      v = LolChampSelectChampSelectTradeState_t::AVAILABLE_E;
      return;
    }
  }
  inline std::string to_string(const LolChampSelectChampSelectTradeState_t& v) {
    switch(v) {
      case LolChampSelectChampSelectTradeState_t::RECEIVED_E:
        return "RECEIVED";
      case LolChampSelectChampSelectTradeState_t::BUSY_E:
        return "BUSY";
      case LolChampSelectChampSelectTradeState_t::INVALID_E:
        return "INVALID";
      case LolChampSelectChampSelectTradeState_t::SENT_E:
        return "SENT";
      case LolChampSelectChampSelectTradeState_t::AVAILABLE_E:
        return "AVAILABLE";
    }
  }

}
