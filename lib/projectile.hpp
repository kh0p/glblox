class Projectile
{                      
   public:      
      // Construct
      Projectile(World*, glm::vec3, glm::vec3, GLuint, int);
      // Destruct
      ~Projectile();

      void update(float);
      void draw();
      bool stopped();
      
   private:
      bool collisionTest();
      float age;
      int blockType;
      glm::vec3 velocity;
      glm::vec3 position;
      AABB hitbox;
      std::vector<vertex> vertices;
      World* worldPtr;
      GLuint program;
      GLuint worldPosAttrib;
      GLuint posAttrib;
      GLuint VBO;    
};