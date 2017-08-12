/home/fede/build-wrapper-linux-x86/build-wrapper-linux-x86-64 --out-dir bw-output rake test:all

/home/fede/sonar-scanner-3.0.3.778-linux/bin/sonar-scanner \
  -Dsonar.projectKey=feede7:master \
  -Dsonar.sources=/home/fede/GIT/leds_testing/src \
  -Dsonar.cfamily.build-wrapper-output=bw-output \
  -Dsonar.host.url=https://sonarcloud.io \
  -Dsonar.organization=feede7-github \
  -Dsonar.login=0afdecf144f6d34addbcdda068f87f9b76efdd22 \
  -X
