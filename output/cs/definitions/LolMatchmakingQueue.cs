using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingQueue
    {
        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "isTeamBuilderManaged")]
        bool IsTeamBuilderManaged { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingQueue {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsTeamBuilderManaged: ").Append(IsTeamBuilderManaged).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}