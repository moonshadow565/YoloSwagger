#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSimpleDialogMessagesLocalMessageRequest_t {
    std::string_t msgType;
    std::vector<std::string> msgBody;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesLocalMessageRequest_t& v) {
    j["msgType"] = v.msgType;
    j["msgBody"] = v.msgBody;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesLocalMessageRequest_t& v) {
    v.msgType = j.at("msgType").get<std::string_t>();
    v.msgBody = j.at("msgBody").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolSimpleDialogMessagesLocalMessageRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
