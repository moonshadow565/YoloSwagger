#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatAuthResourceRsoAccessToken_t {
    uint64_t expiry;
    std::string token;
    std::vector<std::string> scopes;
  };

  inline void to_json(nlohmann::json& j, const LolChatAuthResourceRsoAccessToken_t& v) {
    j["expiry"] = v.expiry;
    j["token"] = v.token;
    j["scopes"] = v.scopes;
  }

  inline void from_json(const nlohmann::json& j, LolChatAuthResourceRsoAccessToken_t& v) {
    v.expiry = j.at("expiry").get<uint64_t>();
    v.token = j.at("token").get<std::string>();
    v.scopes = j.at("scopes").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolChatAuthResourceRsoAccessToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
