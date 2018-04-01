#!/bin/tcsh
cd ${SRCROOT}
set HEADERS = `ls ../*.h ../*.inl`
foreach header (${HEADERS})
    cp -fp "${SRCROOT}"/$header ../../SDK/Include
end

cp -fp "${BUILT_PRODUCTS_DIR}"/libWm5AglApplication.a ../../SDK/Library/Release/libWm5AglApplication.a
ranlib ../../SDK/Library/Release/libWm5AglApplication.a

