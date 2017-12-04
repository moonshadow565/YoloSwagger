#ifndef SWAGGER_TYPES_LolChatAuthResourcePlain_HPP
#define SWAGGER_TYPES_LolChatAuthResourcePlain_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChatAuthResourcePlain {
'    // 
    nlohmann::json gasToken;
    // 
    std::string password;
    // 
    std::string username;
  };

  void to_json(nlohmann::json& j, const LolChatAuthResourcePlain& v) {
    j["gasToken"] = v.gasToken;
    j["password"] = v.password;
    j["username"] = v.username;
  }

  void from_json(const nlohmann::json& j, LolChatAuthResourcePlain& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.password = j.at("password").get<std::string>;
    v.username = j.at("username").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatAuthResourcePlain_HPP
